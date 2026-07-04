/* Runtime dump - ATVURLDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRMercantile;
@protocol ISURLOperationDelegate;

@class ATVMerchant, BRMerchant;
@interface ATVURLDocument : NSObject <ISURLOperationDelegate, BRMercantile>
{
    SSURLRequestProperties * _properties;
    ISURLOperation * _operation;
    id _completionBlock;
    NSMutableDictionary * _metadata;
    char _decoratedByMerchant;
    char _shouldCompleteOnMainThread;
    char isCanceled;
    char _didLoad;
    NSArray * _behaviors;
    BRMerchant * _merchant;
    NSURLRequest * _URLRequest;
    NSURLResponse * _URLResponse;
    NSError * _error;
    NSDate * _requestDate;
    NSDate * _loadedDate;
    NSData * _content;
    ISURLOperation * _preconfiguredOperation;
}

@property (retain, nonatomic) NSArray * behaviors;
@property (nonatomic) char decoratedByMerchant;
@property char shouldCompleteOnMainThread;
@property (retain, nonatomic) NSURLRequest * URLRequest;
@property (retain, nonatomic) NSURLResponse * URLResponse;
@property (readonly, nonatomic) int statusCode;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) NSDate * requestDate;
@property (retain, nonatomic) NSDate * loadedDate;
@property (retain, nonatomic) NSData * content;
@property (readonly, nonatomic) id propertyList;
@property char isCanceled;
@property char didLoad;
@property (retain, nonatomic) ISURLOperation * preconfiguredOperation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) BRMerchant * merchant;

+ (NSURLRequest *)documentWithURLRequest:(NSURLRequest *)arg0 forMerchant:(ATVMerchant *)arg1;
+ (NSDictionary *)documentWithRequestProperties:(NSDictionary *)arg0 forMerchant:(ATVMerchant *)arg1;
+ (void)loadDocuments:(id)arg0 forEachResponse:(NSURLResponse *)arg1 completionHandler:(/* block */ id)arg2;
+ (void)addActiveDocument:(NSObject *)arg0;
+ (void)removeActiveDocument:(NSObject *)arg0;
+ (NSObject *)documentWithURLOperation:(NSObject *)arg0 forMerchant:(ATVMerchant *)arg1;
+ (void)initialize;

- (void)loadWithReponseBlock:(id /* block */)arg0;
- (BRMerchant *)merchant;
- (void)setShouldCompleteOnMainThread:(char)arg0;
- (void)setMerchant:(BRMerchant *)arg0;
- (ATVURLDocument *)initWithRequestProperties:(NSDictionary *)arg0 forMerchant:(ATVMerchant *)arg1;
- (ATVURLDocument *)initWithURLRequest:(NSString *)arg0 forMerchant:(ATVMerchant *)arg1;
- (ATVURLDocument *)initWithURLOperation:(NSObject *)arg0 forMerchant:(ATVMerchant *)arg1;
- (void)setPreconfiguredOperation:(ISURLOperation *)arg0;
- (char)isDecoratedByMerchant;
- (NSObject *)_templateOperation;
- (void)setRequestDate:(NSDate *)arg0;
- (void)_applyBehaviors;
- (void)_runCompletionBlock;
- (char)shouldCompleteOnMainThread;
- (ISURLOperation *)preconfiguredOperation;
- (void)setDidLoad:(char)arg0;
- (void)setLoadedDate:(NSDate *)arg0;
- (void)setURLRequest:(NSURLRequest *)arg0;
- (void)setDecoratedByMerchant:(char)arg0;
- (NSDate *)requestDate;
- (NSDate *)loadedDate;
- (void)operation:(ISURLOperation *)arg0 failedWithError:(NSError *)arg1;
- (NSArray *)propertyList;
- (NSURLResponse *)URLResponse;
- (char)didLoad;
- (void)cancel;
- (void)dealloc;
- (ATVURLDocument *)init;
- (void)addBehavior:(CABehavior *)arg0;
- (NSData *)content;
- (int)statusCode;
- (void)load;
- (void).cxx_destruct;
- (NSArray *)behaviors;
- (void)setBehaviors:(NSArray *)arg0;
- (void)operation:(ISURLOperation *)arg0 didReceiveResponse:(NSURLResponse *)arg1;
- (void)operation:(ISURLOperation *)arg0 finishedWithOutput:(AVPlayerLayer *)arg1;
- (void)operation:(ISURLOperation *)arg0 willSendRequest:(NSMutableURLRequest *)arg1;
- (void)setMetadata:(NSMutableDictionary *)arg0 forKey:(NSString *)arg1;
- (NSString *)metadataForKey:(NSString *)arg0;
- (NSError *)error;
- (void)_finish:(id)arg0;
- (void)setError:(NSError *)arg0;
- (char)isCanceled;
- (void)setContent:(NSData *)arg0;
- (NSURLRequest *)URLRequest;
- (void)setURLResponse:(NSURLResponse *)arg0;
- (void)setIsCanceled:(char)arg0;

@end
