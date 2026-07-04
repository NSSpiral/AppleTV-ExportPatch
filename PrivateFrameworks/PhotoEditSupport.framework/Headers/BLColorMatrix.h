/* Runtime dump - BLColorMatrix
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLColorMatrix : NSObject

+ (struct ?)warmCoolMatrix:(id)arg0;
+ (struct ?)mix:(float)arg0 channelMix1:(struct ?)arg1 channelMix2:(struct ?)arg2;
+ (struct ?)mix:(id)arg0 matrix1:(OADStyleMatrix *)arg1 matrix2:(SEL)arg2;
+ (struct ?)matrix:(OADStyleMatrix *)arg0 numBlocks:(unsigned int)arg1 matrices:(SEL)arg2;

@end
