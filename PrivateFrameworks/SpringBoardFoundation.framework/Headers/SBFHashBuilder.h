/* Runtime dump - SBFHashBuilder
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFHashBuilder : NSObject

+ (unsigned int)hashWithBlocks:(struct _VMUBlockNode *)arg0;
+ (unsigned int)objectHash:(id)arg0;
+ (unsigned int)pointerHash:(void *)arg0;
+ (unsigned int)arrayHash:(id)arg0;
+ (unsigned int)boolHash:(char)arg0;
+ (unsigned int)integerHash:(int)arg0;
+ (unsigned int)unsignedIntegerHash:(unsigned int)arg0;
+ (unsigned int)doubleHash:(double)arg0;

@end
