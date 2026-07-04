/* Runtime dump - NSPropertyListSerialization
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPropertyListSerialization : NSObject
{
    id reserved;
}

+ (void)tsu_processLocalizedPropertyList:(NSArray *)arg0;
+ (NSURL *)tsu_propertyListWithContentsOfURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
+ (NSURL *)tsu_localizedPropertyListWithContentsOfURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
+ (void)tsu_processLocalizedPropertyList:(NSArray *)arg0;
+ (NSURL *)tsu_propertyListWithContentsOfURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
+ (NSURL *)tsu_localizedPropertyListWithContentsOfURL:(NSURL *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
+ (NSData *)_gkTypesafePropertyListWithData:(NSData *)arg0 withClass:(Class)arg1;
+ (NSData *)MCSafePropertyListWithData:(NSData *)arg0 options:(unsigned int)arg1 format:(unsigned int *)arg2 error:(id *)arg3;
+ (char)propertyList:(NSArray *)arg0 isValidForFormat:(unsigned int)arg1;
+ (int)writePropertyList:(NSArray *)arg0 toStream:(NSObject *)arg1 format:(unsigned int)arg2 options:(unsigned int)arg3 error:(id *)arg4;
+ (NSObject *)propertyListWithStream:(NSObject *)arg0 options:(unsigned int)arg1 format:(unsigned int *)arg2 error:(id *)arg3;
+ (NSPropertyListSerialization *)allocWithZone:(struct _NSZone *)arg0;
+ (NSData *)propertyListWithData:(NSData *)arg0 options:(unsigned int)arg1 format:(unsigned int *)arg2 error:(id *)arg3;
+ (NSArray *)dataWithPropertyList:(NSArray *)arg0 format:(unsigned int)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (NSArray *)dataFromPropertyList:(NSArray *)arg0 format:(unsigned int)arg1 errorDescription:(id *)arg2;
+ (NSData *)propertyListFromData:(NSData *)arg0 mutabilityOption:(unsigned int)arg1 format:(unsigned int *)arg2 errorDescription:(id *)arg3;

- (NSPropertyListSerialization *)init;

@end
