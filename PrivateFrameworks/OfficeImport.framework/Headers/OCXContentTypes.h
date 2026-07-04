/* Runtime dump - OCXContentTypes
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXContentTypes : NSObject
{
    NSMutableArray * mContentTypes;
    NSMutableSet * mDefaultTypes;
    NSMutableDictionary * mContentTypeObjectMap;
    NSMutableDictionary * mContentTypeCountMap;
}

+ (NSString *)relativePathForPath:(NSString *)arg0 currentPath:(UIBezierPath *)arg1;

- (void)dealloc;
- (OCXContentTypes *)init;
- (void)populateCommonExtensions;
- (NSString *)uniquePathForPath:(NSString *)arg0;
- (NSString *)addContentTypeForKey:(NSString *)arg0 contentType:(NSString *)arg1 path:(NSString *)arg2;
- (NSString *)pathForKey:(NSString *)arg0;
- (NSObject *)pathForContentType:(NSObject *)arg0;
- (NSObject *)pathForMainDocument;
- (char)containsContentType:(NSObject *)arg0;
- (char)containsContentType:(NSObject *)arg0 withKey:(NSString *)arg1;
- (char)isLastEntryContentType:(NSObject *)arg0;
- (void)writeContentTypesToStream:(NSObject *)arg0;
- (void)addContentTypeForContentType:(NSObject *)arg0 extension:(id *)arg1;

@end
