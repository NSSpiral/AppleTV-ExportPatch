/* Runtime dump - AVChapter
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVChapter : NSObject <NSCopying>
{
    UIImage * _image;
    id _imageBlock;
    unsigned int _number;
    NSString * _title;
    double _startTime;
    double _duration;
}

@property (readonly) double startTime;
@property (readonly) double duration;
@property (readonly) unsigned int number;
@property (readonly, copy) NSString * title;
@property (readonly) UIImage * image;

+ (AVChapter *)playbackChapterWithStartTime:(double)arg0 duration:(double)arg1 number:(unsigned int)arg2 title:(NSString *)arg3 imageFaultBlock:(id /* block */)arg4;
+ (AVChapter *)chapterAtTime:(double)arg0 inChapters:(id)arg1;
+ (void)initialize;

- (AVChapter *)initWithStartTime:(double)arg0 duration:(double)arg1 number:(unsigned int)arg2 title:(NSString *)arg3 imageFaultBlock:(id /* block */)arg4;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (double)duration;
- (NSString *)title;
- (AVChapter *)copyWithZone:(struct _NSZone *)arg0;
- (UIImage *)image;
- (void).cxx_destruct;
- (double)startTime;
- (unsigned int)number;

@end
