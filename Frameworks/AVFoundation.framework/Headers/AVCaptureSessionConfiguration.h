/* Runtime dump - AVCaptureSessionConfiguration
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSessionConfiguration : NSObject
{
    long long _configurationID;
    NSArray * _inputs;
    NSArray * _outputs;
    NSHashTable * _videoPreviewLayers;
    NSArray * _connections;
}

@property (readonly) long long configurationID;
@property (readonly) NSArray * inputs;
@property (readonly) NSArray * outputs;
@property (readonly) NSHashTable * videoPreviewLayers;
@property (readonly) NSArray * connections;

- (NSArray *)outputs;
- (NSArray *)inputs;
- (NSHashTable *)videoPreviewLayers;
- (AVCaptureSessionConfiguration *)initWithConfigurationID:(long long)arg0 inputs:(NSArray *)arg1 outputs:(NSArray *)arg2 videoPreviewLayers:(NSHashTable *)arg3 connections:(NSArray *)arg4;
- (id)uniqueInputs:(id)arg0;
- (id)uniqueOutputs:(id)arg0;
- (NSArray *)uniqueConnections:(NSArray *)arg0;
- (id)uniqueVideoPreviewLayers:(id)arg0;
- (long long)configurationID;
- (NSArray *)connections;
- (void)dealloc;

@end
