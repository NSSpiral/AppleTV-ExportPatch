/* Runtime dump - TLAlertTone
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertTone : NSObject
{
    NSString * _filePath;
    TLSound * _actualSound;
    TLSound * _previewSound;
}

@property (copy, nonatomic) NSString * filePath;
@property (retain, nonatomic) TLSound * actualSound;
@property (retain, nonatomic) TLSound * previewSound;

- (void)dealloc;
- (NSString *)filePath;
- (TLAlertTone *)initWithFilePath:(NSString *)arg0 actualSoundID:(unsigned long)arg1 previewSoundID:(unsigned long)arg2;
- (TLSound *)actualSound;
- (TLSound *)previewSound;
- (void)_setFilePath:(NSString *)arg0;
- (void)_setActualSound:(id)arg0;
- (void)_setPreviewSound:(id)arg0;

@end
