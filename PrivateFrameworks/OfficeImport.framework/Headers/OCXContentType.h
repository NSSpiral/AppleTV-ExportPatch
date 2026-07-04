/* Runtime dump - OCXContentType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXContentType : NSObject
{
    NSString * mContentType;
    NSString * mPath;
    NSString * mExtension;
}

@property (readonly, nonatomic) NSString * contentType;
@property (readonly, nonatomic) NSString * path;

- (void)dealloc;
- (NSString *)path;
- (void)writeToStreamWriter:(NSObject *)arg0;
- (OCXContentType *)initWithContentType:(NSString *)arg0 path:(NSString *)arg1;
- (char)isOverride;
- (OCXContentType *)initWithContentType:(NSString *)arg0 extension:(id *)arg1;
- (NSString *)contentType;

@end
