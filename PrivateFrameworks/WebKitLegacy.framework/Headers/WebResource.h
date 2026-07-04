/* Runtime dump - WebResource
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebResource : NSObject <NSCoding, NSCopying>
{
    WebResourcePrivate * _private;
}

@property (readonly, copy, nonatomic) NSData * data;
@property (readonly, nonatomic) NSURL * URL;
@property (readonly, copy, nonatomic) NSString * MIMEType;
@property (readonly, copy, nonatomic) NSString * textEncodingName;
@property (readonly, copy, nonatomic) NSString * frameName;

+ (NSObject *)bundleForClass;

- (NSString *)textEncodingName;
- (void)dealloc;
- (WebResource *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (WebResource *)init;
- (NSString *)description;
- (WebResource *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (NSURL *)URL;
- (NSString *)MIMEType;
- (WebResource *)initWithData:(NSData *)arg0 URL:(NSString *)arg1 MIMEType:(NSString *)arg2 textEncodingName:(NSString *)arg3 frameName:(NSString *)arg4;
- (NSString *)frameName;
- (struct ArchiveResource *)_coreResource;
- (NSObject *)_initWithCoreResource:(struct PassRefPtr<WebCore::ArchiveResource>)arg0;
- (NSData *)_initWithData:(NSData *)arg0 URL:(NSString *)arg1 MIMEType:(NSString *)arg2 textEncodingName:(NSString *)arg3 frameName:(NSString *)arg4 response:(NSURLResponse *)arg5 copyData:(char)arg6;
- (void)_ignoreWhenUnarchiving;
- (NSData *)_initWithData:(NSData *)arg0 URL:(NSString *)arg1 response:(NSURLResponse *)arg2;
- (NSString *)_suggestedFilename;
- (NSURLResponse *)_response;
- (NSString *)_stringValue;

@end
