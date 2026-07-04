/* Runtime dump - CAMInflightAsset
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMInflightAsset : NSObject
{
    char _isVideo;
    char __didPersistAvalanche;
    char __hasPendingAvalanchePersistenceUpdate;
    short _visibilityState;
    NSString * _uuid;
    NSString * _directory;
    NSString * _filename;
    NSDate * _dateCreated;
    int _deviceOrientationDuringCapture;
    int _captureDeviceDuringCapture;
    NSString * _avalancheUUID;
    int _avalanchePickType;
}

@property (retain, nonatomic) NSString * uuid;
@property (retain, nonatomic) NSString * directory;
@property (retain, nonatomic) NSString * filename;
@property (retain, nonatomic) NSDate * dateCreated;
@property (nonatomic) int deviceOrientationDuringCapture;
@property (nonatomic) int captureDeviceDuringCapture;
@property (nonatomic) char isVideo;
@property (retain, nonatomic) NSString * avalancheUUID;
@property (nonatomic) int avalanchePickType;
@property (nonatomic) short visibilityState;
@property (readonly, nonatomic) char _didPersistAvalanche;
@property (readonly, nonatomic) char _hasPendingAvalanchePersistenceUpdate;

- (CAMInflightAsset *)init;
- (void).cxx_destruct;
- (NSString *)uuid;
- (char)isVideo;
- (void)_avalanchePersistenceStateDidChange;
- (void)_persistAvalancheToFilesystem;
- (NSString *)pathForImageFile;
- (int)deviceOrientationDuringCapture;
- (void)setDeviceOrientationDuringCapture:(int)arg0;
- (int)captureDeviceDuringCapture;
- (void)setCaptureDeviceDuringCapture:(int)arg0;
- (char)_didPersistAvalanche;
- (char)_hasPendingAvalanchePersistenceUpdate;
- (NSString *)filename;
- (void)setFilename:(NSString *)arg0;
- (NSDate *)dateCreated;
- (NSString *)pathForOriginalFile;
- (NSURL *)mainFileURL;
- (NSString *)avalancheUUID;
- (int)avalanchePickType;
- (void)setUuid:(NSString *)arg0;
- (void)setDateCreated:(NSDate *)arg0;
- (NSString *)pathForVideoFile;
- (short)visibilityState;
- (void)setVisibilityState:(short)arg0;
- (void)setAvalancheUUID:(NSString *)arg0;
- (void)setAvalanchePickType:(int)arg0;
- (NSString *)directory;
- (void)setDirectory:(NSString *)arg0;
- (void)setIsVideo:(char)arg0;

@end
