/* Runtime dump - FTRegionSupport
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTRegionSupport : NSObject
{
    NSArray * _regions;
    FTMessageDelivery * _delivery;
}

@property (readonly) char isLoaded;
@property (readonly) char isLoading;
@property (readonly) NSArray * regions;
@property (retain) FTMessageDelivery * _delivery;
@property (retain) NSArray * _regions;

+ (FTRegionSupport *)sharedInstance;

- (void)startLoading;
- (void)dealloc;
- (char)isLoading;
- (char)isLoaded;
- (void)_buildMessageDeliveryIfNeeded;
- (void)flushRegions;
- (NSObject *)regionForID:(NSObject *)arg0;
- (NSArray *)_regions;
- (void)set_regions:(NSArray *)arg0;
- (FTMessageDelivery *)_delivery;
- (void)set_delivery:(FTMessageDelivery *)arg0;
- (NSArray *)regions;

@end
