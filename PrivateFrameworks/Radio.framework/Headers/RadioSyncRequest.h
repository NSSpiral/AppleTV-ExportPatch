/* Runtime dump - RadioSyncRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSyncRequest : RadioRequest
{
    NSObject<OS_dispatch_queue> * _artworkQueue;
    unsigned long long _globalVersion;
    SSURLConnectionRequest * _request;
    NSDictionary * _responseDictionary;
    char _disableArtworkLoading;
    char _includeCleanTracksOnly;
    char _isAutomaticUpdate;
    NSString * _referer;
    NSDictionary * _resultingOverrideBagDictionary;
}

@property (nonatomic) char disableArtworkLoading;
@property (nonatomic) char includeCleanTracksOnly;
@property (nonatomic) char isAutomaticUpdate;
@property (copy, nonatomic) NSString * referer;
@property (readonly, copy, nonatomic) NSDictionary * resultingOverrideBagDictionary;

- (void)setIncludeCleanTracksOnly:(char)arg0;
- (void)cancel;
- (RadioSyncRequest *)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (NSDictionary *)responseDictionary;
- (RadioSyncRequest *)initWithGlobalVersion:(unsigned long long)arg0;
- (NSArray *)changeList;
- (NSDictionary *)matchDictionary;
- (NSObject *)_sortedChangesByType:(NSObject *)arg0;
- (id)_stationSortOrderForChanges:(id)arg0;
- (NSObject *)_updateModel:(NSObject *)arg0 withChangeDictionary:(NSDictionary *)arg1 changeType:(int *)arg2 loadArtworkSynchronously:(char)arg3;
- (void)setDisableArtworkLoading:(char)arg0;
- (char)disableArtworkLoading;
- (char)includeCleanTracksOnly;
- (char)isAutomaticUpdate;
- (void)setIsAutomaticUpdate:(char)arg0;
- (NSString *)referer;
- (void)setReferer:(NSString *)arg0;
- (NSDictionary *)resultingOverrideBagDictionary;

@end
