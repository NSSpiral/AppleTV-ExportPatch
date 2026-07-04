/* Runtime dump - ISDataProvider
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDataProvider : NSObject <NSCopying>
{
    SSAuthenticationContext * _authenticationContext;
    NSNumber * _authenticatedAccountDSID;
    SSURLBagContext * _bagContext;
    long long _contentLength;
    NSString * _contentType;
    id _output;
    ISOperation * _parentOperation;
    NSURL * _redirectURL;
    int _errorHandlerResponseType;
}

@property (retain) SSAuthenticationContext * authenticationContext;
@property (retain) SSURLBagContext * bagContext;
@property ISOperation * parentOperation;
@property long long contentLength;
@property (retain) NSString * contentType;
@property (retain) NSNumber * authenticatedAccountDSID;
@property (retain) id output;
@property (retain) NSURL * redirectURL;
@property int errorHandlerResponseType;

+ (NSString *)provider;

- (NSObject *)output;
- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (void)dealloc;
- (ISDataProvider *)copyWithZone:(struct _NSZone *)arg0;
- (char)isStream;
- (SSAuthenticationContext *)authenticationContext;
- (ISOperation *)parentOperation;
- (void)setParentOperation:(ISOperation *)arg0;
- (long long)contentLength;
- (void)setup;
- (SSURLBagContext *)bagContext;
- (NSURL *)redirectURL;
- (void)setRedirectURL:(NSURL *)arg0;
- (void)setContentType:(NSString *)arg0;
- (void)setContentLength:(long long)arg0;
- (NSString *)contentType;
- (void)streamCancelled;
- (long long)streamedBytes;
- (char)isStreamComplete;
- (NSNumber *)authenticatedAccountDSID;
- (NSObject *)closeStream;
- (char)parseData:(NSData *)arg0 returningError:(id *)arg1;
- (int)errorHandlerResponseType;
- (void)resetStream;
- (void)streamDidFailWithError:(NSError *)arg0;
- (char)canStreamContentLength:(long long)arg0 error:(id *)arg1;
- (void)setBagContext:(SSURLBagContext *)arg0;
- (void)setAuthenticatedAccountDSID:(NSNumber *)arg0;
- (void)setOutput:(NSObject *)arg0;
- (char)_runServerAuthenticationOperation:(NSObject *)arg0 error:(id *)arg1;
- (char)runSubOperation:(NSObject *)arg0 error:(id *)arg1;
- (void)configureFromProvider:(NSObject *)arg0;
- (void)migrateOutputFromSubProvider:(NSObject *)arg0;
- (char)runAuthorizationDialog:(id)arg0 error:(id *)arg1;
- (void)setErrorHandlerResponseType:(int)arg0;

@end
