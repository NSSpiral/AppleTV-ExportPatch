/* Runtime dump - CDDevice
 * Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDDevice : NSObject
{
    CDSession * _session;
    int remoteDataNotificationToken;
    unsigned int _identifier;
    NSString * _modelIdentifier;
}

@property (readonly) unsigned int identifier;
@property (readonly) NSString * modelIdentifier;
@property (readonly) CDSession * session;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (void).cxx_destruct;
- (CDSession *)session;
- (char)isEqualToDevice:(NSObject *)arg0;
- (NSError *)readSystemDataWithError:(id *)arg0;
- (CDDevice *)initWithSession:(CDSession *)arg0 identifier:(unsigned int)arg1 modelIdentifier:(NSString *)arg2 error:(id *)arg3;
- (char)setSystemDataHandlerWithError:(id *)arg0 handler:(id /* block */)arg1;
- (char)requestSystemDataWithError:(id *)arg0;
- (char)setLogDataHandlerWithError:(id *)arg0 handler:(id /* block */)arg1;
- (NSError *)readLogDataWithError:(id *)arg0;
- (char)requestLogDataWithError:(id *)arg0;
- (NSString *)modelIdentifier;

@end
