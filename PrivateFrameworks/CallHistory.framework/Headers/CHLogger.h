/* Runtime dump - CHLogger
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHLogger : NSObject <CHLoggerProtocol>
{
    struct StaticLogger _logger;
}

+ (void)logWithLevel:(unsigned char)arg0 logger:(struct LoggerBase<std::__1::shared_ptr<ctu::LogServer> > *)arg1 format:(struct __short)arg2 argList:(struct __raw)arg3;

- (CHLogger *)initWithDomain:(NSString *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)shouldLogForLevel:(unsigned int)arg0;
- (void)logWithLevel:(unsigned int)arg0 withFormat:(NSString *)arg1;
- (void)logWithLevel:(unsigned int)arg0 withFormat:(NSString *)arg1 withArgs:(void *)arg2;

@end
