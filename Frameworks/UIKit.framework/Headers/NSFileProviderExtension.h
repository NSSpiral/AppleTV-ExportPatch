/* Runtime dump - NSFileProviderExtension
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling>
{
    NSObject<OS_dispatch_queue> * _extensionDispatchQueue;
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSURL * _memberQueueDocumentStorageURL;
    NSString * _memberQueueProviderIdentifier;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * memberQueue;
@property (retain, nonatomic) NSURL * memberQueueDocumentStorageURL;
@property (copy, nonatomic) NSString * memberQueueProviderIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURL *)_resourceIDOfURL:(NSURL *)arg0 outError:(id *)arg1;
+ (NSURL *)_relativeComponentsOfURL:(NSURL *)arg0 fromBaseURL:(NSURL *)arg1;
+ (char)writePlaceholderAtURL:(NSURL *)arg0 withMetadata:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSURL *)placeholderURLForURL:(NSURL *)arg0;

- (void)dealloc;
- (NSFileProviderExtension *)init;
- (NSURL *)documentStorageURL;
- (NSString *)providerIdentifier;
- (NSObject<OS_dispatch_queue> *)memberQueue;
- (NSURL *)memberQueueDocumentStorageURL;
- (void)beginRequestWithExtensionContext:(NSExtensionContext *)arg0;
- (NSString *)URLForItemWithPersistentIdentifier:(char)arg0;
- (NSURL *)persistentIdentifierForItemAtURL:(NSURL *)arg0;
- (void)providePlaceholderAtURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (void)startProvidingItemAtURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (void)itemChangedAtURL:(NSURL *)arg0;
- (void)stopProvidingItemAtURL:(NSURL *)arg0;
- (void)setMemberQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setMemberQueueDocumentStorageURL:(NSURL *)arg0;
- (NSString *)memberQueueProviderIdentifier;
- (void)setMemberQueueProviderIdentifier:(NSString *)arg0;

@end
