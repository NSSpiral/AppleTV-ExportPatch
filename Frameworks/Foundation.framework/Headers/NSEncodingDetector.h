/* Runtime dump - NSEncodingDetector
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSEncodingDetector : NSObject
{
    unsigned long _encoding;
    unsigned long _givenNumBytes;
    unsigned long _numChars;
    unsigned long _numMultiByteChars;
    unsigned long _numSingleBytechars;
    unsigned long _skipBytes;
    unsigned long _numZeroBytes;
    unsigned long _mostFrqChars;
    unsigned long _numBigrams;
    unsigned long _numRep;
    unsigned long _numDirect;
    unsigned long _numBase64;
    unsigned long _numSeq;
    unsigned long _numTrigram;
    unsigned long _numLower;
    unsigned long _numHigher;
    double _weight;
    char _hasBase64;
    char _isBigEndian;
    char _hasBOM;
    unsigned int _tag;
}

+ (NSEncodingDetector *)encodingDetectorWithEncoding:(unsigned int)arg0;

- (unsigned long)recognizeString:(char *)arg0 withDataLength:(unsigned long)arg1 withReplacement:(char *)arg2 withReplacementLength:(unsigned long)arg3 inNewData:(char *)arg4 maxBufferLength:(unsigned long)arg5 actualBufferLength:(unsigned int *)arg6;
- (void)softReset;
- (double)bytesRatio;
- (unsigned long)maxSkipBytes;
- (double)confidenceWith2Chars;
- (double)multiBytesRatio;
- (NSEncodingDetector *)init;
- (void)reset;
- (double)confidence;

@end
