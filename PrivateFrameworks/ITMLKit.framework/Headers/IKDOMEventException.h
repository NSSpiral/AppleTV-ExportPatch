/* Runtime dump - IKDOMEventException
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMEventException : IKJSObject <IKJSDOMEventException>
{
    int code;
}

@property (nonatomic) int code;

+ (NSString *)exceptionWithAppContext:(<IKApplication> *)arg0 code:(int)arg1;

- (int)code;
- (void)setCode:(int)arg0;

@end
