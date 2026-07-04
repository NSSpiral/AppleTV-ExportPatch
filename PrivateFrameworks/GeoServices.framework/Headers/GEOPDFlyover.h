/* Runtime dump - GEOPDFlyover
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDFlyover : PBCodable <NSCopying>
{
    struct ? * _cameraPaths;
    unsigned int _cameraPathsCount;
    unsigned int _cameraPathsSpace;
    struct ? * _labelFrames;
    unsigned int _labelFramesCount;
    unsigned int _labelFramesSpace;
    NSMutableArray * _labels;
    NSMutableArray * _notificationMessages;
    char _useSplines;
    struct ? _has;
}

@property (readonly, nonatomic) unsigned int cameraPathsCount;
@property (readonly, nonatomic) struct ? * cameraPaths;
@property (nonatomic) char hasUseSplines;
@property (nonatomic) char useSplines;
@property (readonly, nonatomic) unsigned int labelFramesCount;
@property (readonly, nonatomic) struct ? * labelFrames;
@property (retain, nonatomic) NSMutableArray * labels;
@property (retain, nonatomic) NSMutableArray * notificationMessages;

+ (NSData *)flyoverForPlaceData:(NSData *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDFlyover *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSMutableArray *)notificationMessages;
- (NSString *)bestLocalizedAnnouncementMessage;
- (void)setLabels:(NSMutableArray *)arg0;
- (void)clearCameraPaths;
- (void)clearLabelFrames;
- (void)setNotificationMessages:(NSMutableArray *)arg0;
- (void)addLabel:(NSString *)arg0;
- (void)addNotificationMessage:(NSString *)arg0;
- (void)addLabelFrame:(struct ?)arg0;
- (unsigned int)labelsCount;
- (void)clearLabels;
- (unsigned int)notificationMessagesCount;
- (void)clearNotificationMessages;
- (NSObject *)notificationMessageAtIndex:(unsigned int)arg0;
- (struct ? *)cameraPaths;
- (void)setCameraPaths:(struct ? *)arg0 count:(NSObject *)arg1;
- (void)setUseSplines:(char)arg0;
- (void)setHasUseSplines:(char)arg0;
- (char)hasUseSplines;
- (struct ? *)labelFrames;
- (void)setLabelFrames:(struct ? *)arg0 count:(NSObject *)arg1;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (struct ?)cameraPathAtIndex:(SEL)arg0;
- (unsigned int)cameraPathsCount;
- (void)addCameraPath:(struct ?)arg0;
- (char)useSplines;
- (unsigned int)labelFramesCount;
- (struct ?)labelFrameAtIndex:(SEL)arg0;
- (NSObject *)labelAtIndex:(unsigned int)arg0;
- (NSMutableArray *)labels;

@end
