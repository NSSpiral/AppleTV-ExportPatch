/* Runtime dump - CAPackage
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAPackage : NSObject
{
    struct _CAPackageData * _data;
}

@property (readonly) CALayer * rootLayer;
@property (readonly) char geometryFlipped;

+ (CAPackage *)packageWithData:(struct _CAPackageData *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
+ (CAPackage *)packageWithContentsOfURL:(NSURL *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;

- (id)unarchiver:(SKKeyedUnarchiver *)arg0 didDecodeObject:(NSObject *)arg1;
- (Class)unarchiver:(SKKeyedUnarchiver *)arg0 cannotDecodeObjectOfClassName:(NSString *)arg1 originalClasses:(NSArray *)arg2;
- (NSURL *)_initWithContentsOfURL:(NSURL *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (NSData *)_initWithData:(struct _CAPackageData *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (void)_readFromCAMLURL:(NSURL *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (void)_readFromArchiveData:(NSData *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (void)_readFromCAMLData:(NSData *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (NSArray *)substitutedClasses;
- (void)_addClassSubstitutions:(id)arg0;
- (NSArray *)publishedObjectNames;
- (Class)CAMLParser:(NSObject *)arg0 didFailToFindClassWithName:(NSString *)arg1;
- (NSObject *)CAMLParser:(NSObject *)arg0 resourceForURL:(NSURL *)arg1;
- (void)CAMLParser:(NSObject *)arg0 didLoadResource:(NSObject *)arg1 fromURL:(NSURL *)arg2;
- (void)dealloc;
- (CALayer *)rootLayer;
- (void)foreachLayer:(id)arg0;
- (char)isGeometryFlipped;
- (NSString *)publishedObjectWithName:(NSString *)arg0;

@end
