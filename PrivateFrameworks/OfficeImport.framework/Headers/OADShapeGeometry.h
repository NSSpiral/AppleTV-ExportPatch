/* Runtime dump - OADShapeGeometry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShapeGeometry : NSObject
{
    char mIsEscher;
    NSMutableDictionary * mAdjustValues;
}

- (void)dealloc;
- (OADShapeGeometry *)init;
- (NSString *)description;
- (NSDictionary *)adjustValues;
- (char)isEscher;
- (long)adjustValueAtIndex:(unsigned int)arg0;
- (void)setIsEscher:(char)arg0;
- (unsigned int)adjustValueCount;
- (char)hasAdjustValueAtIndex:(unsigned int)arg0;
- (void)setAdjustValue:(long)arg0 atIndex:(unsigned int)arg1;

@end
