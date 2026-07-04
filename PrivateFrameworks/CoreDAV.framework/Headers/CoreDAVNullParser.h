/* Runtime dump - CoreDAVNullParser
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser>
{
    NSError * _parserError;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSError * parserError;

+ (char)canHandleContentType:(NSObject *)arg0;

- (void)dealloc;
- (NSError *)parserError;
- (char)processData:(NSData *)arg0 forTask:(NSObject *)arg1;

@end
