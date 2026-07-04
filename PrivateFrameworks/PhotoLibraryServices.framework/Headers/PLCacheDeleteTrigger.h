/* Runtime dump - PLCacheDeleteTrigger
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCacheDeleteTrigger : PLCloudTrigger
{
    char _activated;
    int _urgency;
    long long _goal;
}

@property (readonly, nonatomic) long long goal;
@property (readonly, nonatomic) int urgency;

- (PLCacheDeleteTrigger *)init;
- (void)activate;
- (long long)processPurgeRequestWithUrgency:(int)arg0 targetBytesCount:(long long)arg1;
- (long long)goal;
- (int)urgency;

@end
