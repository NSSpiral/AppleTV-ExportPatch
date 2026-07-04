/* Runtime dump - OITSUPathSet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUPathSet : NSObject <NSCopying>
{
    NSMutableSet * mPaths;
    NSMutableDictionary * mBasePathToNumberMap;
    OITSUPathSet * mUnderlyingSet;
}

+ (void)processPath:(NSString *)arg0 base:(id *)arg1 hasBaseNumber:(char *)arg2 baseNumber:(unsigned int *)arg3 extension:(id *)arg4;
+ (NSString *)parseNumberOutOfBasename:(id)arg0 hasNumber:(char *)arg1 number:(unsigned int *)arg2;

- (void)dealloc;
- (OITSUPathSet *)init;
- (OITSUPathSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)addPath:(NSString *)arg0;
- (OITSUPathSet *)initWithPaths:(NSArray *)arg0 basePathToNumberMap:(NSObject *)arg1;
- (void)setUnderlyingPathSet:(NSSet *)arg0;
- (char)isPathUsed:(id)arg0;
- (void)pathIsUsed:(id)arg0;
- (void)pathIsNoLongerUsed:(id)arg0;
- (void)unionPathSet:(NSSet *)arg0;

@end
