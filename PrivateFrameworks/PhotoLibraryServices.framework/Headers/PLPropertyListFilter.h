/* Runtime dump - PLPropertyListFilter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPropertyListFilter : NSObject

+ (NSDictionary *)_filterDictionary:(NSDictionary *)arg0 block:(id /* block */)arg1;
+ (NSArray *)_filterArray:(NSArray *)arg0 block:(id /* block */)arg1;
+ (char)canEncodeInPropertyList:(NSArray *)arg0;
+ (NSArray *)filterPropertyList:(NSArray *)arg0 block:(id /* block */)arg1;
+ (NSArray *)filterPropertyList:(NSArray *)arg0;
+ (NSData *)filterPropertyListNoData:(NSData *)arg0;

@end
