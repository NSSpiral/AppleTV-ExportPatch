/* Runtime dump - IKDOMLSException
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMLSException : IKJSObject <IKDOMLSException>
{
    int code;
}

@property (nonatomic) int code;

+ (NSString *)exceptionWithAppContext:(<IKApplication> *)arg0 code:(int)arg1;

- (int)code;
- (void)setCode:(int)arg0;

@end
