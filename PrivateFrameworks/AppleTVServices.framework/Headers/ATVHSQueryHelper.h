/* Runtime dump - ATVHSQueryHelper
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSQueryHelper : NSObject

+ (NSObject *)atvFilterWithProperty:(NSString *)arg0 query:(NSObject *)arg1;
+ (void)setMetaDataArgumentWithRequest:(NSURLRequest *)arg0 query:(NSObject *)arg1 dpap:(char)arg2;
+ (void)setSortArgumentWithRequest:(NSURLRequest *)arg0 query:(NSObject *)arg1 dpap:(char)arg2;
+ (void)setRangeArgumentWithRequest:(NSURLRequest *)arg0 query:(NSObject *)arg1;
+ (char)isDPAPQuery:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;
+ (NSObject *)queryArgumentWithATVFilter:(NSObject *)arg0 queryType:(int)arg1;
+ (NSObject *)mediaKindForATVMediaType:(NSObject *)arg0;
+ (NSObject *)mediaKindForPlaylistMediaType:(NSObject *)arg0;
+ (NSObject *)queryArgumentWithProperty:(NSString *)arg0 operator:(int)arg1 value:(NSObject *)arg2;
+ (NSObject *)dmapStrForATVProperty:(NSObject *)arg0 dpap:(char)arg1;
+ (void)_appendDMAPCodeForProperty:(NSString *)arg0 toMetadataStrng:(id)arg1 isDPAP:(char)arg2;
+ (void)setQueryArgumentWithRequest:(NSURLRequest *)arg0 query:(NSObject *)arg1;

@end
