/* Runtime dump - PLMomentListCluster
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentListCluster : NSObject
{
    unsigned int _month;
    unsigned int _year;
    unsigned int _numberOfMoments;
    unsigned int _numberOfAssets;
    NSMutableSet * __moments;
}

@property (readonly, nonatomic) unsigned int month;
@property (readonly, nonatomic) unsigned int year;
@property (readonly, nonatomic) unsigned int numberOfMoments;
@property (readonly, nonatomic) unsigned int numberOfAssets;
@property (readonly, nonatomic) NSMutableSet * _moments;

- (void)dealloc;
- (PLMomentListCluster *)init;
- (unsigned int)year;
- (unsigned int)month;
- (PLMomentListCluster *)initWithMonth:(unsigned int)arg0 year:(unsigned int)arg1;
- (void)addMoment:(PLMoment *)arg0;
- (void)removeMoment:(PLMoment *)arg0;
- (unsigned int)peak;
- (unsigned int)numberOfMoments;
- (unsigned int)numberOfAssets;
- (NSMutableSet *)_moments;

@end
