/* Runtime dump - CKDProgressTracker
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProgressTracker : NSObject
{
    char _hasCachedTotalBytes;
    char _hasCachedCompletedBytes;
    NSMapTable * _completedBytesByItems;
    NSString * _trackingID;
    double _lastItemPercentage;
    unsigned long long _cachedTotalBytes;
    unsigned long long _cachedCompletedBytes;
}

@property (nonatomic) double lastItemPercentage;
@property (nonatomic) char hasCachedTotalBytes;
@property (nonatomic) char hasCachedCompletedBytes;
@property (nonatomic) unsigned long long cachedTotalBytes;
@property (nonatomic) unsigned long long cachedCompletedBytes;
@property (retain, nonatomic) NSMapTable * completedBytesByItems;
@property (retain, nonatomic) NSString * trackingID;

+ (unsigned long long)_sizeForItem:(NSObject *)arg0;

- (CKDProgressTracker *)init;
- (void).cxx_destruct;
- (CKDProgressTracker *)initWithTrackingID:(NSString *)arg0;
- (void)stopTrackingItems:(NSArray *)arg0;
- (void)startTrackingItems:(NSArray *)arg0;
- (double)updateProgressWithItem:(NSObject *)arg0 progress:(double)arg1;
- (void)setLastItemPercentage:(double)arg0;
- (NSString *)trackingID;
- (unsigned long long)_updateTotalBytes;
- (unsigned long long)_updateTotalCompletedBytes;
- (double)lastItemPercentage;
- (char)hasCachedTotalBytes;
- (void)setHasCachedTotalBytes:(char)arg0;
- (char)hasCachedCompletedBytes;
- (void)setHasCachedCompletedBytes:(char)arg0;
- (unsigned long long)cachedTotalBytes;
- (void)setCachedTotalBytes:(unsigned long long)arg0;
- (unsigned long long)cachedCompletedBytes;
- (void)setCachedCompletedBytes:(unsigned long long)arg0;
- (NSMapTable *)completedBytesByItems;
- (void)setCompletedBytesByItems:(NSMapTable *)arg0;
- (void)setTrackingID:(NSString *)arg0;

@end
