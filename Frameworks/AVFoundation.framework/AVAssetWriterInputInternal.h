/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputHelper, AVAssetWriterInputPassDescriptionResponder, AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterInputInternal : NSObject {
    NSObject<OS_dispatch_queue> *appendFailureReadWriteQueue;
    boolattachedToMetadataAdaptor;
    boolattachedToPixelBufferAdaptor;
    AVAssetWriterInputHelper *helper;
    NSObject<OS_dispatch_queue> *helperQueue;
    long long numberOfAppendFailures;
    AVAssetWriterInputPassDescriptionResponder *passDescriptionResponder;
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToAssetWriter;
}

@end