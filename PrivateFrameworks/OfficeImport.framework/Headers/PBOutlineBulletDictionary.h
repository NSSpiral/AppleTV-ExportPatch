/* Runtime dump - PBOutlineBulletDictionary
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBOutlineBulletDictionary : NSObject
{
    NSMutableDictionary * mDictionary;
}

- (void)dealloc;
- (PBOutlineBulletDictionary *)initFromContainer:(NSObject *)arg0 objectType:(unsigned int)arg1;
- (NSObject *)objectForSlideId:(unsigned long)arg0 textType:(int)arg1 placeholderIndex:(unsigned long)arg2;

@end
