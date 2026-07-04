/* Runtime dump - IKOnReadyStateChangeMessage
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKOnReadyStateChangeMessage : NSObject
{
    unsigned int _readyState;
    unsigned int _statusCode;
    NSString * _statusText;
    NSError * _error;
}

@property (readonly, nonatomic) unsigned int readyState;
@property (readonly, nonatomic) unsigned int statusCode;
@property (copy, nonatomic) NSString * statusText;
@property (copy, nonatomic) NSError * error;

- (unsigned int)statusCode;
- (void).cxx_destruct;
- (NSError *)error;
- (IKOnReadyStateChangeMessage *)initWithReadyState:(unsigned int)arg0 statusCode:(unsigned int)arg1 statusText:(NSString *)arg2 error:(NSError *)arg3;
- (NSString *)statusText;
- (void)setStatusText:(NSString *)arg0;
- (void)setError:(NSError *)arg0;
- (unsigned int)readyState;

@end
