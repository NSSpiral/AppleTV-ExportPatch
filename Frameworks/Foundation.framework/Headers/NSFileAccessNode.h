/* Runtime dump - NSFileAccessNode
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessNode : NSObject
{
    NSFileAccessNode * _parent;
    NSString * _name;
    NSString * _normalizedName;
    NSFileAccessNode * _symbolicLinkDestination;
    unsigned int _symbolicLinkReferenceCount;
    NSMutableDictionary * _childrenByNormalizedName;
    id _presenterOrPresenters;
    id _provider;
    id _accessClaimOrClaims;
    char _isArbitrationBoundary;
    char _isFilePackageIsFigured;
    char _isFilePackage;
    NSString * _lastRequestedChildName;
    NSFileAccessNode * _lastRequestedChild;
    id _progressPublisherOrPublishers;
    id _progressSubscriberOrSubscribers;
}

- (NSFileAccessNode *)initWithParent:(NSFileAccessNode *)arg0 name:(NSString *)arg1 normalizedName:(NSString *)arg2;
- (NSURL *)descendantForFileURL:(NSURL *)arg0;
- (void)setSymbolicLinkDestination:(NSFileAccessNode *)arg0;
- (NSURL *)pathToDescendantForFileURL:(NSURL *)arg0 componentRange:(struct _NSRange *)arg1;
- (NSString *)descendantAtPath:(NSString *)arg0 componentRange:(struct _NSRange)arg1 create:(char)arg2;
- (void)forEachPresenterOfContainingItemPerformProcedure:(id)arg0;
- (NSObject *)itemProvider;
- (id)pathFromAncestor:(id)arg0;
- (NSString *)descendantAtPath:(NSString *)arg0 componentRange:(struct _NSRange)arg1 forAddingLeafNode:(NSObject *)arg2 create:(char)arg3;
- (void)forEachProgressPublisherOfItemPerformProcedure:(id)arg0;
- (void)setParent:(NSFileAccessNode *)arg0 name:(NSString *)arg1;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id)arg0;
- (NSString *)urlOfSubitemAtPath:(NSString *)arg0 plusPath:(NSString *)arg1;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id)arg0;
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(id)arg0;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id)arg0;
- (void)setArbitrationBoundary;
- (NSString *)sensitiveDescription;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(id)arg0;
- (char)itemIsItemAtLocation:(NSObject *)arg0;
- (char)itemIsInItemAtLocation:(NSObject *)arg0;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(id)arg0;
- (void)forEachPresenterOfItemPerformProcedure:(id)arg0;
- (char)itemIsFilePackage;
- (void)forEachPresenterOfContainedItemPerformProcedure:(id)arg0;
- (void)forEachRelevantAccessClaimPerformProcedure:(id)arg0;
- (char)itemIsSubarbitrable;
- (void)addAccessClaim:(NSFileMultipleAccessClaim *)arg0;
- (void)removeAccessClaim:(NSFileMultipleAccessClaim *)arg0;
- (void)removeSelfIfUseless;
- (void)removeChildForNormalizedName:(NSString *)arg0;
- (NSString *)normalizationOfChildName:(NSString *)arg0;
- (void)setChild:(TSSStylesheet *)arg0 forName:(NSString *)arg1 normalizedName:(NSString *)arg2;
- (NSObject *)childForRange:(struct _NSRange)arg0 ofPath:(NSString *)arg1;
- (void)forEachDescendantPerformProcedure:(id)arg0;
- (NSObject *)biggestFilePackageLocation;
- (void)forEachAccessClaimOnItemPerformProcedure:(id)arg0;
- (id)pathExceptPrivate;
- (void)forEachProgressSubscriberOfItemPerformProcedure:(id)arg0;
- (void)assertLive;
- (char)_mayContainCriticalDebuggingInformation;
- (id)_childrenExcludingExcessNodes:(char)arg0;
- (NSString *)descriptionWithIndenting:(id)arg0 excludingExcessNodes:(char)arg1;
- (void)addPresenter:(UIDocumentAlertPresenter *)arg0;
- (void)removePresenter:(UIDocumentAlertPresenter *)arg0;
- (void)addProgressPublisher:(id)arg0;
- (void)removeProgressPublisher:(id)arg0;
- (void)addProgressSubscriber:(_NSProgressSubscriber *)arg0;
- (void)removeProgressSubscriber:(_NSProgressSubscriber *)arg0;
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(id)arg0;
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(id)arg0;
- (void)assertDead;
- (void)assertDescendantsLive;
- (void)dealloc;
- (NSString *)description;
- (NSURL *)url;
- (NSURL *)standardizedURL;
- (void)setProvider:(NSObject *)arg0;
- (NSFileAccessNode *)parent;

@end
