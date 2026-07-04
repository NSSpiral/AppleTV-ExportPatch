/* Runtime dump - SSVFairPlaySAPSession
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFairPlaySAPSession : NSObject <SSVSAPContext>
{
    NSObject<OS_dispatch_queue> * _completionBlockQueue;
    NSData * _certificateData;
    SSVFairPlaySAPContext * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    char _primed;
    SSURLBag * _urlBag;
    SSVURLBagInterpreter * _urlBagInterpreter;
    int _version;
}

@property (readonly, nonatomic) int version;
@property (readonly, nonatomic) char primed;
@property (copy) NSData * certificateData;
@property (readonly) int SAPVersion;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SSVFairPlaySAPSession *)sharedDefaultSession;
+ (SSVFairPlaySAPSession *)sharedPrimeSession;

- (SSVFairPlaySAPSession *)initWithURLBag:(NSString *)arg0;
- (SSVFairPlaySAPSession *)init;
- (int)version;
- (void).cxx_destruct;
- (void)setCertificateData:(NSData *)arg0;
- (NSData *)certificateData;
- (SSVFairPlaySAPSession *)initWithURLBagDictionary:(NSDictionary *)arg0;
- (char)verifyData:(NSData *)arg0 withSignature:(NSObject *)arg1 error:(id *)arg2;
- (NSData *)signatureWithData:(NSData *)arg0 error:(id *)arg1;
- (SSVURLBagInterpreter *)_urlBagInterpreter;
- (SSVFairPlaySAPSession *)initWithSAPVersion:(int)arg0;
- (SSVFairPlaySAPSession *)initWithURLBag:(NSString *)arg0 SAPVersion:(int)arg1;
- (SSVFairPlaySAPSession *)_initSSVFairPlaySAPSession;
- (SSVFairPlaySAPSession *)initWithURLBagDictionary:(NSDictionary *)arg0 SAPVersion:(int)arg1;
- (NSString *)_establishContext;
- (char)_primeTheConnection;
- (void)signData:(NSData *)arg0 completionBlock:(id /* block */)arg1;
- (void)verifySignature:(NSObject *)arg0 forData:(NSData *)arg1 completionBlock:(id /* block */)arg2;
- (NSData *)_loadCertificateData;
- (NSData *)_postExchangeData:(NSData *)arg0;
- (char)verifyPrimeResponse:(NSURLResponse *)arg0;
- (SSVFairPlaySAPSession *)_initWithURLBagInterpreter:(SSVURLBagInterpreter *)arg0 SAPVersion:(int)arg1;
- (void)establishSessionWithCompletionBlock:(id /* block */)arg0;
- (void)primeSessionWithCompletionBlock:(id /* block */)arg0;
- (int)SAPVersion;
- (char)primed;

@end
