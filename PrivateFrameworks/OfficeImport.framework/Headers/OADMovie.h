/* Runtime dump - OADMovie
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADMovie : OCDDelayedMedia
{
    NSData * mData;
    NSString * mName;
    float mStart;
    float mEnd;
    char loop;
}

@property (retain) NSData * data;
@property (retain) NSString * name;
@property (readonly) char isAudioOnly;
@property char loop;
@property float movieStartPoint;
@property float movieEndPoint;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (char)isAudioOnly;
- (float)movieStartPoint;
- (void)setMovieStartPoint:(float)arg0;
- (float)movieEndPoint;
- (void)setMovieEndPoint:(float)arg0;
- (char)loop;
- (void)setLoop:(char)arg0;

@end
