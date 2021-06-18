// read bmp image
// run canny+blur in matlab
// run hough algorithm to get biggest line
// plot line to see if correct
// save image with red line from coordinates

// HOUGH 
// https://github.com/brunokeymolen/hough/blob/master/hough.cpp

// HLS CATAPULT
// https://github.com/hlslibs/hls_tutorials/tree/master/WalkThroughs/EdgeDetect/src

using namespace std;

#include "Hough.hpp"
#include "bmp_io.hpp"


//#include <mc_scverify.h>

int main(int argc, char *argv[]){
    const int iW = 1296;
    const int iH = 864;
    int bsize = 24;

    Hough_Algorithm inst0;

    int width = iW;
    int height = iH;
    unsigned char *rarray = new unsigned char[iW*iH];
    unsigned char *garray = new unsigned char[iW*iH];
    unsigned char *barray = new unsigned char[iW*iH];

    cout << "Loading Input File" << endl;

    if (argc < 2){
      cout << "Usage: " << argv[0] << " <inputbmp> <outputbmp>" << endl;
      return(-1);
    }

    std::string bmpIn(argv[1]);  // input bitmap file
    std::string bmpAlg(argv[2]); // output bitmap (algorithm)

    bmp_read((char*)bmpIn.c_str(), &width, &height, &bsize, &rarray, &garray, &barray);
    assert(width==iW);
    assert(height==iH);

    unsigned char* dat_in_orig = new unsigned char[iH*iW];
    int x1, y1, x2, y2;

    unsigned  cnt = 0;
    for (int y = 0; y < iH; y++){
        for (int x = 0; x < iW; x++){
          dat_in_orig[cnt] = rarray[cnt]; // just using red component (pseudo monochrome)
          cnt++;
        }
    }

    cout << "Running" << endl;
    cout << "0\n";
    inst0.run(dat_in_orig, x1, y1, x2, y2);
    cout << "1\n";
    plotLine(dat_in_orig, x1, y1, x2, y2, iW);
    cout << "2\n";
    cnt = 0;
    for (int y = 0; y < iH; y++){
        for (int x = 0; x < iW; x++){
            int alg = (int)*(dat_in_orig+cnt);
            cnt++;
            garray[cnt] = alg;  // repurposing 'green' array to the original algorithmic edge-detect output
        }
    }
    cout << "3\n";

    cout << "Writing algorithmic bitmap output to: " << bmpAlg << endl;
    // bmp_24_write((char*)bmpAlg.c_str(), iW,  iH, garray, garray, garray);
    bmp_write((char*)bmpAlg.c_str(), iW,  iH, bsize, garray, garray, garray);


    delete(dat_in_orig);
    delete(rarray);
    delete(garray);
    delete(barray);

    cout << "Finished" << endl;
    return(0);
}