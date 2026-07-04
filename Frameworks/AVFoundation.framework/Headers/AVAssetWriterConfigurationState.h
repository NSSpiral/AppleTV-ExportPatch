/* Runtime dump - AVAssetWriterConfigurationState
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterConfigurationState : NSObject
{
    NSURL * _URL;
    AVMediaFileType * _mediaFileType;
    struct ? _movieFragmentInterval;
    char _shouldOptimizeForNetworkUse;
    NSURL * _directoryForTemporaryFiles;
    NSArray * _metadataItems;
    int _movieTimeScale;
    struct CGAffineTransform _preferredTransform;
    float _preferredVolume;
    float _preferredRate;
    NSArray * _inputs;
    NSArray * _inputGroups;
}

@property (copy, nonatomic) NSURL * URL;
@property (copy, nonatomic) AVMediaFileType * mediaFileType;
@property (nonatomic) struct ? movieFragmentInterval;
@property (nonatomic) char shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL * directoryForTemporaryFiles;
@property (copy, nonatomic) NSArray * metadataItems;
@property (nonatomic) int movieTimeScale;
@property (nonatomic) struct CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) float preferredRate;
@property (copy, nonatomic) NSArray * inputs;
@property (copy, nonatomic) NSArray * inputGroups;

- (NSArray *)inputs;
- (float)preferredRate;
- (float)preferredVolume;
- (void)setPreferredTransform:(struct CGAffineTransform)arg0;
- (void)setPreferredVolume:(float)arg0;
- (AVMediaFileType *)mediaFileType;
- (void)setMediaFileType:(AVMediaFileType *)arg0;
- (struct ?)movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct ?)arg0;
- (char)shouldOptimizeForNetworkUse;
- (NSURL *)directoryForTemporaryFiles;
- (void)setDirectoryForTemporaryFiles:(NSURL *)arg0;
- (NSArray *)metadataItems;
- (void)setMetadataItems:(NSArray *)arg0;
- (int)movieTimeScale;
- (void)setMovieTimeScale:(int)arg0;
- (void)setPreferredRate:(float)arg0;
- (void)setInputs:(NSArray *)arg0;
- (NSArray *)inputGroups;
- (void)setInputGroups:(NSArray *)arg0;
- (void)dealloc;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (struct CGAffineTransform)preferredTransform;
- (void)setShouldOptimizeForNetworkUse:(char)arg0;

@end
