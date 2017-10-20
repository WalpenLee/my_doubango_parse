/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace org.doubango.tinyWRAP {

using System;
using System.Runtime.InteropServices;

public class SdpMessage : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal SdpMessage(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(SdpMessage obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~SdpMessage() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          tinyWRAPPINVOKE.delete_SdpMessage(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public SdpMessage() : this(tinyWRAPPINVOKE.new_SdpMessage(), true) {
  }

  public string getSdpHeaderValue(string media, char name, uint index) {
    string ret = tinyWRAPPINVOKE.SdpMessage_getSdpHeaderValue__SWIG_0(swigCPtr, media, name, index);
    return ret;
  }

  public string getSdpHeaderValue(string media, char name) {
    string ret = tinyWRAPPINVOKE.SdpMessage_getSdpHeaderValue__SWIG_1(swigCPtr, media, name);
    return ret;
  }

  public string getSdpHeaderAValue(string media, string attributeName) {
    string ret = tinyWRAPPINVOKE.SdpMessage_getSdpHeaderAValue(swigCPtr, media, attributeName);
    return ret;
  }

}

}
