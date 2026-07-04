/* Runtime dump - TSDReflection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    float mOpacity;
    float mFadeAcceleration;
}

@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) float fadeAcceleration;

+ (TSDReflection *)instanceWithArchive:(struct ReflectionArchive *)arg0 unarchiver:(struct ReflectionArchive)arg1;
+ (char)canMixWithNilObjects;
+ (TSDReflection *)reflection;

- (void)saveToArchive:(struct ReflectionArchive *)arg0 archiver:(NSObject *)arg1;
- (TSDReflection *)initWithArchive:(struct ReflectionArchive *)arg0 unarchiver:(struct ReflectionArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSDReflection *)initWithOpacity:(float)arg0;
- (TSDReflection *)initWithOpacity:(float)arg0 fadeAcceleration:(float)arg1;
- (float)fadeAcceleration;
- (TSDReflection *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDReflection *)copyWithZone:(struct _NSZone *)arg0;
- (float)opacity;
- (TSDReflection *)mutableCopyWithZone:(struct _NSZone *)arg0;

@end
