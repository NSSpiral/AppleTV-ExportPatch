/* Runtime dump - PSSearchIndexOperation
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchIndexOperation : NSOperation
{
    PSSearchEntry * _searchEntry;
    <PSSearchIndexOperationDelegate> * _delegate;
}

@property (readonly, nonatomic) PSSearchEntry * searchEntry;
@property (nonatomic) <PSSearchIndexOperationDelegate> * delegate;

+ (PSSearchIndexOperation *)_bundleForSearchEntry:(id)arg0 thirdPartyApp:(char *)arg1 checkManifest:(char *)arg2;
+ (PSSearchIndexOperation *)_loadThirdPartySearchEntriesForEntry:(id)arg0 bundle:(NSObject *)arg1;
+ (PSSearchIndexOperation *)_loadSearchEntriesFromPlistForEntry:(id)arg0 bundle:(NSObject *)arg1;

- (void)dealloc;
- (void)setDelegate:(<PSSearchIndexOperationDelegate> *)arg0;
- (<PSSearchIndexOperationDelegate> *)delegate;
- (void)main;
- (void)_cancel;
- (PSSearchIndexOperation *)initWithSearchEntry:(PSSearchEntry *)arg0 delegate:(<PSSearchIndexOperationDelegate> *)arg1;
- (PSSearchEntry *)searchEntry;
- (void)_finishedIndexingWithEntries:(NSArray *)arg0 cancelled:(char)arg1;

@end
