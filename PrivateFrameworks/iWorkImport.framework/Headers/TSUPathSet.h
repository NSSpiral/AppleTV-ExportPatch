/* Runtime dump - TSUPathSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUPathSet : NSObject <NSCopying>
{
    NSMutableSet * mPaths;
    NSMutableDictionary * mBasePathToNumberMap;
    TSUPathSet * mUnderlyingSet;
}

+ (void)processPath:(NSString *)arg0 base:(id *)arg1 hasBaseNumber:(char *)arg2 baseNumber:(unsigned int *)arg3 extension:(id *)arg4;
+ (NSString *)parseNumberOutOfBasename:(id)arg0 hasNumber:(char *)arg1 number:(unsigned int *)arg2;

- (void)dealloc;
- (TSUPathSet *)init;
- (TSUPathSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)addPath:(NSString *)arg0;
- (TSUPathSet *)initWithPaths:(NSArray *)arg0 basePathToNumberMap:(NSObject *)arg1;
- (void)setUnderlyingPathSet:(NSSet *)arg0;
- (char)isPathUsed:(id)arg0;
- (void)pathIsUsed:(id)arg0;
- (void)pathIsNoLongerUsed:(id)arg0;
- (void)unionPathSet:(NSSet *)arg0;

@end
