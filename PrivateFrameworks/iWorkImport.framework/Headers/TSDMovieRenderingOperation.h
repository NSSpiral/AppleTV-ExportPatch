/* Runtime dump - TSDMovieRenderingOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation
{
    TSDMovieInfo * mMovieInfo;
    char mShouldClipVertically;
}

@property (retain) TSDMovieInfo * movieInfo;

- (void)doWorkWithReadLock;
- (TSDMovieRenderingOperation *)initWithPreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 movieInfo:(struct CGSize)arg4 documentRoot:(struct CGSize)arg5 shouldClipVertically:(id)arg6;
- (TSDMovieRenderingOperation *)initWithPreset:(NSSet *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 movieInfo:(struct CGSize)arg4 documentRoot:(struct CGSize)arg5;
- (void)dealloc;
- (void)setMovieInfo:(TSDMovieInfo *)arg0;
- (TSDMovieInfo *)movieInfo;

@end
