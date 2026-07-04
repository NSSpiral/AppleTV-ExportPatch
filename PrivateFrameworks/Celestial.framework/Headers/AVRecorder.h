/* Runtime dump - AVRecorder
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVRecorder : NSObject
{
    struct AVRecorderPrivate * _priv;
}

- (char)isRecording;
- (double)recordedDuration;
- (char)takePhoto;
- (void)dealloc;
- (AVRecorder *)init;
- (char)isActive;
- (void)stop;
- (void)deactivate;
- (char)start;
- (void)setFilePath:(NSString *)arg0;
- (NSString *)filePath;
- (void)implNotification:(NSNotification *)arg0;
- (char)activate:(id *)arg0;
- (void)makeError:(id *)arg0 withDescription:(NSString *)arg1 code:(long)arg2;
- (char)autoFocusAtPoint:(struct CGPoint)arg0;
- (float)micVolume;
- (void)setMicVolume:(float)arg0;
- (long long)recordedFileSizeInBytes;
- (unsigned int)audioNumDeviceChannels;
- (char)audioCurrentAverageVolumeLevels:(float *)arg0 andPeakVolumeLevels:(float *)arg1;
- (char)audioCurrentAverageDecibelLevels:(float *)arg0 andPeakDecibelLevels:(float *)arg1;
- (void)setAttribute:(char *)arg0 forKey:(NSString *)arg1;
- (NSString *)attributeForKey:(NSString *)arg0;

@end
