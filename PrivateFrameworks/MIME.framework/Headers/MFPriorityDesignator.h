/* Runtime dump - MFPriorityDesignator
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFPriorityDesignator : NSObject
{
    int _priority;
}

+ (MFPriorityDesignator *)currentDesignator;

- (void)setPriority:(int)arg0;
- (int)priority;

@end
