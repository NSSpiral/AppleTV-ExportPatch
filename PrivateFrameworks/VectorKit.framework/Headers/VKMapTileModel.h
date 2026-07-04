/* Runtime dump - VKMapTileModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapTileModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    NSMutableSet * _tilesWillEnterScene;
    NSMutableSet * _tilesInScene;
    NSMutableSet * _tilesInScenePlusExitingTiles;
    NSMutableSet * _tilesWillExitScene;
    NSMutableSet * _tilesExitingScene;
    NSMutableSet * _previousTilesInScene;
    VKMapModel * _mapModel;
    unsigned char _minimumZ;
    unsigned char _maximumZ;
}

@property (nonatomic) VKMapModel * mapModel;
@property (readonly, nonatomic) NSSet * tilesInScene;
@property (readonly, nonatomic) NSSet * tilesInScenePlusExitingTiles;
@property (readonly, nonatomic) unsigned char minimumZ;
@property (readonly, nonatomic) unsigned char maximumZ;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) VKStyleManager * styleManager;

+ (char)reloadOnStylesheetChange;
+ (char)reloadOnActiveTileGroupChange;

- (void)dealloc;
- (VKMapTileModel *)init;
- (void)reset;
- (VKStyleManager *)styleManager;
- (void)setMapModel:(VKMapModel *)arg0;
- (void)didMoveToSupermodel;
- (char)shouldLayoutWithoutStyleManager;
- (void)stylesheetWillChange;
- (void)stylesheetDidChange;
- (void)activeTileGroupChanged;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (unsigned long long)mapLayerPosition;
- (void)updateTilesInScene:(NSObject *)arg0 withContext:(NSObject *)arg1 categorize:(char)arg2;
- (VKMapModel *)mapModel;
- (void)createCollections;
- (void)clearCollections;
- (void)createCollectionsIfNecessary;
- (void)removePersistingExitingTiles:(id)arg0;
- (void)willStartDrawingTiles:(id)arg0;
- (void)willStopDrawingTiles:(id)arg0;
- (NSSet *)tilesInScene;
- (NSSet *)tilesInScenePlusExitingTiles;
- (unsigned char)minimumZ;
- (unsigned char)maximumZ;

@end
