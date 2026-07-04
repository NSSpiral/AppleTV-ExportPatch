/* Runtime dump - NSASCIIEncodingDetector
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSASCIIEncodingDetector : NSSingleByteEncodingDetector

- (unsigned long)recognizeString:(char *)arg0 withDataLength:(unsigned long)arg1 withReplacement:(char *)arg2 withReplacementLength:(unsigned long)arg3 inNewData:(char *)arg4 maxBufferLength:(unsigned long)arg5 actualBufferLength:(unsigned int *)arg6;
- (NSASCIIEncodingDetector *)init;
- (double)confidence;

@end
