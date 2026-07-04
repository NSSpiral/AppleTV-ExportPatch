/* Runtime dump - IKDOMXPathException
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMXPathException : IKJSObject <IKJSDOMXPathException>
{
    int code;
}

@property (nonatomic) int code;

+ (NSString *)exceptionWithAppContext:(<IKApplication> *)arg0 code:(int)arg1;

- (int)code;
- (void)setCode:(int)arg0;

@end
