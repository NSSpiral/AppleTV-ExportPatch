/* Runtime dump - CAContext
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAContext : NSObject

@property (readonly) unsigned int contextId;
@property (retain) CALayer * layer;
@property struct CGColorSpace * colorSpace;
@property (readonly) NSDictionary * options;
@property float level;
@property char secure;
@property (readonly) char valid;

+ (CAContext *)allContexts;
+ (void)setClientPort:(unsigned int)arg0;
+ (NSDictionary *)remoteContextWithOptions:(NSDictionary *)arg0;
+ (NSDictionary *)localContextWithOptions:(NSDictionary *)arg0;
+ (CAContext *)objectForSlot:(unsigned int)arg0;
+ (CAContext *)currentContext;
+ (NSString *)localContext;
+ (NSString *)remoteContext;

- (void)_setAssociatedScreen:(NSObject *)arg0;
- (NSObject *)_associatedScreen;
- (void)orderBelow:(unsigned int)arg0;
- (void)invalidate;
- (void)orderAbove:(unsigned int)arg0;
- (void)setFencePort:(unsigned int)arg0 commitHandler:(id /* block */)arg1;
- (void)setFencePort:(unsigned int)arg0;
- (void)setFence:(unsigned int)arg0 count:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (unsigned int)createImageSlot:(struct CGSize)arg0 hasAlpha:(char)arg1;
- (void)deleteSlot:(unsigned int)arg0;
- (unsigned int)createSlot;
- (void)setObject:(NSObject *)arg0 forSlot:(unsigned int)arg1;

@end
