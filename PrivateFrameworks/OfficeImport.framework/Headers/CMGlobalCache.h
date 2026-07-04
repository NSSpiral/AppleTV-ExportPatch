/* Runtime dump - CMGlobalCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMGlobalCache : NSObject

+ (void)initGlobalCache;
+ (void)releaseGlobalCache;
+ (NSCache *)colorPropertyCache;
+ (NSCache *)lengthPropertyCache;
+ (NSCache *)borderStyleCache;
+ (float *)borderWidthCache;
+ (NSCache *)cssStylesheetCache;
+ (NSCache *)drawableElementCache;

@end
