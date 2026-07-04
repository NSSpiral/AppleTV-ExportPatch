/* Runtime dump - NSSubstituteWebResource
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSSubstituteWebResource : NSObject
{
    NSData * _data;
    NSURL * _url;
    NSString * _mimeType;
    NSString * _textEncodingName;
    NSString * _frameName;
}

- (NSString *)textEncodingName;
- (void)dealloc;
- (NSData *)data;
- (NSURL *)URL;
- (NSString *)MIMEType;
- (Class)_webResourceClass;
- (NSSubstituteWebResource *)initWithData:(NSData *)arg0 URL:(NSString *)arg1 MIMEType:(NSString *)arg2 textEncodingName:(NSString *)arg3 frameName:(NSString *)arg4;
- (NSString *)frameName;
- (NSObject *)webResource;

@end
