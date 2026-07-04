/* Runtime dump - MSSearch
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol>
{
    <MSSearchDelegate> * _delegate;
}

@property (nonatomic) <MSSearchDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)findMessageData:(NSData *)arg0 matchingCriterion:(id)arg1 options:(unsigned int)arg2 delegate:(<MSSearchDelegate> *)arg3;
+ (NSData *)findMessageData:(NSData *)arg0 matchingCriterion:(id)arg1 shouldFetch:(char)arg2 onServer:(char)arg3 delegate:(<MSSearchDelegate> *)arg4;
+ (NSData *)findMessageData:(NSData *)arg0 matchingCriterion:(id)arg1 shouldFetch:(char)arg2 onServer:(char)arg3 onlyInboxes:(char)arg4 delegate:(<MSSearchDelegate> *)arg5;
+ (void)setUnitTestingResultsArray:(NSArray *)arg0;

- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<MSSearchDelegate> *)arg0;
- (<MSSearchDelegate> *)delegate;
- (NSObject *)_initWithDelegate:(<MSSearchDelegate> *)arg0;
- (void)_findMessageData:(NSData *)arg0 matchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)newConnectionForInterface:(id)arg0;
- (void)foundResults:(NSArray *)arg0 error:(NSError *)arg1;
- (void)_delegateDidFinishWithError:(NSError *)arg0;
- (void)_delegateDidFindResults:(NSArray *)arg0;
- (char)_unitTestsAreEnabled;
- (NSString *)_generateUnitTestReplyForMethod:(NSString *)arg0 arg:(id)arg1 error:(id *)arg2;
- (void)_generateUnitTestResponsesForResultArray:(NSArray *)arg0;

@end
