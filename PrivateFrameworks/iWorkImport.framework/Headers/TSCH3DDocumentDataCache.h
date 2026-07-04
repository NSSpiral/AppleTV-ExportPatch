/* Runtime dump - TSCH3DDocumentDataCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DDocumentDataCache : NSObject
{
    TSKDocumentRoot * mDocumentRoot;
}

+ (NSCache *)dataFromCache:(NSObject *)arg0 forFile:(NSString *)arg1 group:(NSObject *)arg2 generateBlock:(id /* block */)arg3;
+ (NSObject *)dataCacheWithDocumentRoot:(NSObject *)arg0;

- (TSCH3DDocumentDataCache *)initWithDocumentRoot:(NSObject *)arg0;
- (NSString *)dataForFile:(NSString *)arg0 group:(NSObject *)arg1 generateBlock:(id /* block */)arg2;
- (char)debug_nukeDocumentCachePathForGroup:(NSObject *)arg0;
- (void)dealloc;
- (TSCH3DDocumentDataCache *)init;

@end
