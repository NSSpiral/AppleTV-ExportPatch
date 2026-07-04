/* Runtime dump - SSVPlaybackLeaseRequest
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLeaseRequest : NSObject <NSCopying>
{
    NSString * _bagKey;
    NSURL * _certificateURL;
    NSMutableDictionary * _parameters;
    char _shouldIncludeFairPlayLeaseRequest;
    char _startsLeaseSession;
    unsigned long _transactionType;
    NSURL * _url;
}

@property (copy, nonatomic) NSDictionary * parameterValues;
@property (nonatomic) char startsLeaseSession;
@property (nonatomic) unsigned long _transactionType;
@property (copy, nonatomic) NSURL * _URL;
@property (copy, nonatomic) NSString * _URLBagKey;
@property (nonatomic) char _shouldIncludeFairPlayLeaseRequest;

- (void)_setURL:(NSURL *)arg0;
- (NSURL *)_URL;
- (void)setValue:(NSObject *)arg0 forParameter:(/* block */ id)arg1;
- (void)setStartsLeaseSession:(char)arg0;
- (SSVPlaybackLeaseRequest *)init;
- (SSVPlaybackLeaseRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (id)valueForParameter:(id)arg0;
- (void)setParameterValues:(NSDictionary *)arg0;
- (void)_setTransactionType:(unsigned long)arg0;
- (void)_setURLBagKey:(NSString *)arg0;
- (void)_setShouldIncludeFairPlayLeaseRequest:(char)arg0;
- (NSDictionary *)parameterValues;
- (char)_shouldIncludeFairPlayLeaseRequest;
- (char)startsLeaseSession;
- (unsigned long)_transactionType;
- (NSString *)_URLBagKey;

@end
